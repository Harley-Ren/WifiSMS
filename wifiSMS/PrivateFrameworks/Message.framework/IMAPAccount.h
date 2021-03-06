/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSArray, NSString, IMAPOperationCache, NSMutableArray, NSRecursiveLock, NSMutableSet;



@interface IMAPAccount : MailAccount <IMAPMailboxListFilter>
{
    NSString *_separatorChar;
    struct __CFArray { } *_lastKnownCapabilities;
    struct __CFArray { } *_cachedConnections;
    struct __CFArray { } *_mailboxesToSynchronize;
    unsigned int _readBufferSize : 31;
    unsigned int _lastConnectionFailed : 1;
    unsigned int _askedToListenForNotifications : 1;
    unsigned int _pcStylePush : 1;
    unsigned int _setDefaultStyleYet : 1;
    IMAPOperationCache *_offlineCache;
    NSMutableSet *_mailboxesWithChangedUidNext;
    NSUInteger _greatestInboxUid;
    double _timeLastFetchedMailboxList;
    NSRecursiveLock *_flagChangesLock;
    NSMutableArray *_recentFlagChanges;
    NSRecursiveLock *_connectionLock;
    NSInteger _nextConnectionTag;
    void *_packetContextAssertion;
    NSArray *_lockOrderingArray;
    NSString *_apsTopic;
}

+ (void)initialize;
+ (id)saslProfileName;
+ (id)accountTypeString;
+ (void)_deleteQueuedMailboxes:(id)arg1;

- (id)mf_lockOrdering;
- (id)init;
- (void)messagesAdded:(id)arg1;
- (NSInteger)greatestInboxUid;
- (NSUInteger)minUID;
- (NSUInteger)minID;
- (void)_readCustomInfoFromMailboxCache:(id)arg1;
- (void)_writeCustomInfoToMailboxCache:(id)arg1;
- (void)dealloc;
- (void)saveState;
- (Class)storeClass;
- (id)mailboxPathExtension;
- (void)setDisplayName:(id)arg1;
- (NSUInteger)defaultPortNumber;
- (NSUInteger)defaultSecurePortNumber;
- (id)serviceName;
- (id)secureServiceName;
- (BOOL)requiresAuthentication;
- (Class)connectionClass;
- (BOOL)compactWhenClosingMailboxes;
- (void)setCompactWhenClosingMailboxes:(BOOL)arg1;
- (BOOL)useIDLEIfAvailable;
- (void)setUseIDLEIfAvailable:(BOOL)arg1;
- (BOOL)needToSynchronizeMailboxCaches;
- (void)_didSynchronizeMailboxCachesAndFoundChanges:(BOOL)arg1;
- (BOOL)_setChildren:(id)arg1 forMailboxUid:(id)arg2;
- (BOOL)storeMailboxTypeOnServer:(NSInteger)arg1;
- (void)setStoreMailboxType:(NSInteger)arg1 onServer:(BOOL)arg2;
- (void)handleAlertResponse:(id)arg1;
- (NSUInteger)readBufferSize;
- (void)setReadBufferSize:(NSUInteger)arg1;
- (void)_synchronizeMailboxesSynchronously;
- (void)synchronizeMailboxes:(id)arg1;
- (void)synchronizeAllMailboxes;
- (void)_checkForNewMessagesInStore:(id)arg1 unreadCountDelta:(NSUInteger)arg2;
- (id)_dataForTemporaryUid:(unsigned long)arg1;
- (NSUInteger)minimumPartialDownloadSize;
- (BOOL)allowsPartialDownloads;
- (void)setAllowsPartialDownloads:(BOOL)arg1;
- (BOOL)deleteInPlace;
- (BOOL)connectAndAuthenticate:(id)arg1;
- (id)connectionForStore:(id)arg1 delegate:(id)arg2 options:(NSInteger)arg3;
- (void)handleOpenMailboxError:(id)arg1;
- (void)_purgeStaleFlagChanges;
- (void)checkInConnection:(id)arg1;
- (void)checkInConnectionsForStore:(id)arg1;
- (void)unselectMailbox:(id)arg1;
- (void)filterMailboxList:(id)arg1 forMailbox:(id)arg2 options:(NSInteger)arg3;
- (void)_backgroundReleaseAllConnections:(id)arg1;
- (void)_releaseAllConnectionsAndCallSuper:(BOOL)arg1 edgeForcedOnly:(BOOL)arg2 ifIdleForTimeInterval:(double)arg3 saveOfflineCache:(BOOL)arg4;
- (void)_releaseAllConnectionsAndCallSuper:(BOOL)arg1;
- (void)releaseAllConnections;
- (void)releaseAllForcedConnections;
- (void)releaseAllConnectionsIdleForTimeInterval:(double)arg1;
- (void)_validateConnections;
- (void)validateConnections;
- (void)_networkConfigurationChanged;
- (void)networkConfigurationChanged:(id)arg1;
- (void)acquireNetworkAssertion;
- (void)releaseNetworkAssertion;
- (void)connectionDidDisconnect:(id)arg1;
- (BOOL)connection:(id)arg1 shouldHandleUntaggedResponse:(id)arg2 forCommand:(struct { NSInteger x1; id x2; id x3; NSUInteger x4; }*)arg3;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2 forCommand:(struct { NSInteger x1; id x2; id x3; NSUInteger x4; }*)arg3;
- (BOOL)canGoOffline;
- (void)_setIsOffline:(BOOL)arg1;
- (void)_setIsOfflineWrapper:(id)arg1;
- (void)setIsOffline:(BOOL)arg1;
- (NSInteger)fetchSynchronously;
- (NSInteger)fetchSynchronouslyLite;
- (id)separatorChar;
- (id)lastKnownCapabilities;
- (BOOL)supportsIDLE;
- (BOOL)xListSupportedOnConnection:(id)arg1;
- (id)_listingForMailboxUid:(id)arg1 listAllChildren:(BOOL)arg2 onlySubscribed:(BOOL)arg3 withConnection:(id)arg4;
- (id)_listingForMailboxUid:(id)arg1 listAllChildren:(BOOL)arg2 onlySubscribed:(BOOL)arg3;
- (id)_listingForMailboxUid:(id)arg1 listAllChildren:(BOOL)arg2;
- (id)_createMailboxWithParent:(id)arg1 name:(id)arg2 attributes:(NSUInteger)arg3 dictionary:(id)arg4;
- (BOOL)_deleteMailbox:(id)arg1;
- (void)_setSpecialMailbox:(id)arg1 forType:(NSInteger)arg2;
- (BOOL)_isMailboxTypeStoredLocally:(NSInteger)arg1;
- (void)_renameLocalSpecialMailboxesToName:(id)arg1;
- (id)_specialMailboxUidWithType:(NSInteger)arg1 create:(BOOL)arg2;
- (BOOL)canBeSynchronized;
- (void)considerSynchronizingNow;
- (void)nowWouldBeAGoodTimeToStartBackgroundSynchronization;
- (void)_fetchUnreadCountsForMailboxUid:(id)arg1 recursively:(BOOL)arg2 connection:(id)arg3 checkForNewMessages:(BOOL)arg4;
- (void)_fetchUnreadCountsForMailboxUid:(id)arg1 recursively:(BOOL)arg2 connection:(id)arg3;
- (void)_fetchUnreadCountsCheckForNewMessages:(BOOL)arg1;
- (void)resetMailboxTimer;
- (void)getMailboxListIfNecessaryWithConnection:(id)arg1;
- (void)_synchronizeAccountWithServer;
- (void)fetchMailboxList;
- (id)_copyMailboxUidWithParent:(id)arg1 name:(id)arg2 attributes:(NSUInteger)arg3 existingMailboxUid:(id)arg4 permanentTag:(id)arg5 dictionary:(id)arg6;
- (void)_synchronouslyLoadListingForParent:(id)arg1;
- (void)refreshMailboxListingRootedAtUid:(id)arg1;
- (void)_waitForMailboxListingLoadToComplete;
- (void)_mailboxesWereRemovedFromTree:(id)arg1 withFileSystemPaths:(id)arg2;
- (BOOL)renameMailbox:(id)arg1 newName:(id)arg2 parent:(id)arg3;
- (id)_pathComponentForUidName:(id)arg1;
- (id)_uidNameForPathComponent:(id)arg1;
- (id)_nameForMailboxUid:(id)arg1;
- (id)nameForMailboxUid:(id)arg1;
- (id)_mailboxUidForName:(id)arg1;
- (BOOL)canMailboxBeDeleted:(id)arg1;
- (id)serverPathPrefix;
- (void)setServerPathPrefix:(id)arg1 shouldSync:(BOOL)arg2;
- (void)setServerPathPrefix:(id)arg1;
- (id)_fileSystemServerPathPrefix;
- (id)_mailboxPathPrefix;
- (void)deleteMessagesFromMailboxUid:(id)arg1 olderThanNumberOfDays:(NSUInteger)arg2;
- (id)offlineCacheIfExists;
- (id)offlineCacheIfOffline;
- (id)offlineCache;
- (id)offlineCacheDirectoryPath;
- (BOOL)hasPendingOfflineOperations;
- (BOOL)requiresDataForOfflineTransfersFromStore:(id)arg1;
- (id)mailboxUidForRelativePath:(id)arg1 create:(BOOL)arg2;
- (id)_URLScheme;
- (id)_infoForMatchingURL:(id)arg1;
- (id)_apsTopic;
- (void)startListeningForNotifications;
- (void)stopListeningForNotifications;
- (BOOL)_canReceiveNewMailNotifications;
- (void)_setAPSTopic:(id)arg1;
- (void)_setCapabilities:(id)arg1;
- (void)setValueInAccountInfo:(id)arg1 forKey:(id)arg2;
- (id)flagChangesLock;
- (void)addFlagChanges:(id)arg1 forMailboxPath:(id)arg2 UID:(NSUInteger)arg3;
- (id)flagChangesForMailboxPath:(id)arg1 UID:(NSUInteger)arg2 connectTime:(double)arg3;
- (void)removeFlagChanges:(id)arg1 forMessages:(id)arg2;
- (void)removeFlagChangesCommittedBefore:(double)arg1;
- (void)setCommitTime:(double)arg1 forConnectionTag:(NSUInteger)arg2;
- (void)setConnectionTag:(NSUInteger)arg1 forFlagChanges:(id)arg2 forMessages:(id)arg3;
- (id)valueInAccountInfoForKey:(id)arg1;
- (void)setLibrary:(id)arg1;
- (BOOL)supportsRemoteAppend;
- (BOOL)shouldExpungeMessagesOnDelete;
- (BOOL)shouldRestoreMessagesAfterFailedDelete;

@end
