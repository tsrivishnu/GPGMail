/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSOperationQueue, NSSet, NSUbiquitousKeyValueStore;

@interface MFVIPSendersController : NSObject
{
    NSMutableArray *_VIPSendersMailboxes;
    NSUbiquitousKeyValueStore *_store;
    NSOperationQueue *_operationQueue;
    NSSet *_VIPSendersAddresses;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(retain) NSSet *VIPSendersAddresses; // @synthesize VIPSendersAddresses=_VIPSendersAddresses;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) NSUbiquitousKeyValueStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (id)_keyForVIP:(id)arg1;
- (void)_mergeVIPs;
- (void)_updateLocalWithCloud:(id)arg1 refresh:(BOOL)arg2;
- (void)_storeChanged:(id)arg1;
- (void)_updateCloudWithLocal:(id)arg1;
- (void)_addressBookDidChange:(id)arg1;
- (id)addressesForVIPSenders;
- (BOOL)isVIPForPerson:(id)arg1 orAddress:(id)arg2;
- (void)removeVIPSenderWithAddress:(id)arg1;
- (void)removeVIPSenderWithMailboxes:(id)arg1;
- (void)addNewVIPSenderWithAddress:(id)arg1 name:(id)arg2;
- (id)VIPSendersMailboxes;
- (id)_vipsPlistPath;
- (void)_updateMailboxesAndPostNotificationsOnMainThread;
- (void)_readVIPSenders;
- (void)_saveVIPSendersAndUpdateMailboxes:(BOOL)arg1;
- (void)save;
- (id)_addressBookRecordsForFirstName:(id)arg1 lastName:(id)arg2 withAddressBook:(id)arg3;
- (id)_ABPersonForName:(id)arg1 withAddressBook:(id)arg2;
- (id)_ABPersonForName:(id)arg1 emailAddresses:(id)arg2 withAddressBook:(id)arg3;
- (id)_combineAddresses:(id)arg1 withAddresses:(id)arg2;
- (BOOL)_canCreateNewVIP;
- (id)_mailboxWithName:(id)arg1 addresses:(id)arg2 uuid:(id)arg3;
- (id)_addressesForMailboxCriteria:(id)arg1;
- (id)_mailboxCriteriaForAddresses:(id)arg1;
- (void)dealloc;
- (id)init;

@end

