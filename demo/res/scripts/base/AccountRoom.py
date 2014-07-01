# -*- coding:utf-8 -*-

from KBEDebug import *
import KBEngine

class AccountRoom( KBEngine.Base ):

	def __init__( self ):
		KBEngine.Base.__init__( self )
		self.accountDict = {}
		KBEngine.globalData["AccountRoom"] = self
		#self.registerGlobally( "AccountRoom", self.registerGlobalCB )
		INFO_MSG( "register globally success." )
		
	def registerGlobalCB( self, complete ):
		if not complete:	# ����ĳЩԭ��ûע��ɹ�����֪������ԭ��Ҫ�о�һ�£�������ע�ᣬֱ���ɹ����߳��Դ����ﵽ����Ҳ�޷�ע��
			self.registerGlobally( "AccountRoom", self.registerGlobalCB )
		else:
			INFO_MSG( "register globally success." )
			
	def registerAccount( self, accountName, accountMailbox ):
		if( self.accountDict is None):
			self.accountDict = {}
		#for name, mailbox in self.accountDict.iteritems():		# һ���Դ������������Ҫ������������ƿ������Ҫ�в�������֧�֡�
		for name, mailbox in self.accountDict.items():
			mailbox.client.onNewAccountEnter( accountName )
			accountMailbox.client.onNewAccountEnter( name )	# ������Կ���һ���Դ���һ�������ڷ��ͣ�����Ҫ��ε��÷���������Ҫ����һ��
		self.accountDict[accountName] = accountMailbox
		INFO_MSG( "%s register to chatroom success" % accountName )
		
	def deregisterAccount( self, accountName ):
		"""
		"""
		del self.accountDict[accountName]
		for mailbox in self.accountDict.values():
			mailbox.client.onAccountLeave( accountName )
		INFO_MSG( "%s deregister from chat room" % accountName )
		
	def sendMsg( self, accountName, msg ):
		"""
		"""
		for name, mailbox in self.accountDict.items():
			if True or name != accountName:
				mailbox.client.receiveMsg( accountName, msg )
				