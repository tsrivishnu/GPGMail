/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class IMAPGateway, MCActivityMonitor, NSMapTable, NSMutableDictionary, NSString;

@interface _IMAPOfflineRestoreContext : NSObject
{
    MCActivityMonitor *_monitor;
    IMAPGateway *_gateway;
    NSMapTable *_temporaryToRealUidMap;
    NSMutableDictionary *_storesByMailboxName;
    unsigned long long _currentSize;
    unsigned long long _totalSize;
    long long _activityAccessKey;
    NSString *_oldTaskName;
}

@property(copy, nonatomic) NSString *oldTaskName; // @synthesize oldTaskName=_oldTaskName;
@property(nonatomic) long long activityAccessKey; // @synthesize activityAccessKey=_activityAccessKey;
@property(nonatomic) unsigned long long totalSize; // @synthesize totalSize=_totalSize;
@property(nonatomic) unsigned long long currentSize; // @synthesize currentSize=_currentSize;
@property(retain, nonatomic) NSMutableDictionary *storesByMailboxName; // @synthesize storesByMailboxName=_storesByMailboxName;
@property(retain, nonatomic) NSMapTable *temporaryToRealUidMap; // @synthesize temporaryToRealUidMap=_temporaryToRealUidMap;
@property(retain, nonatomic) IMAPGateway *gateway; // @synthesize gateway=_gateway;
@property(retain, nonatomic) MCActivityMonitor *monitor; // @synthesize monitor=_monitor;
- (void).cxx_destruct;
- (id)description;

@end

