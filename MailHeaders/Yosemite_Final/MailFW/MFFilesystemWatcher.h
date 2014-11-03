/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMapTable, NSObject<OS_dispatch_queue>, NSOperationQueue;

@interface MFFilesystemWatcher : NSObject
{
    NSMapTable *_libraryIMAPStoreToFSCache;
    NSMapTable *_fseventStreamToLibraryIMAPStore;
    NSMapTable *_libraryIMAPStoreToFSEventStream;
    id _fseventsTableLock;
    NSObject<OS_dispatch_queue> *_scanningQueue;
    NSOperationQueue *_cachedDirectoryOperationQueue;
    long long _nextLibraryIMAPStoreCookie;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;
- (id)_fseventsTableLock;
- (id)_fseventStreamToLibraryIMAPStore;
- (void)stopWatchingPathForLibraryIMAPStore:(long long)arg1;
- (id)getCachedFilesFor:(long long)arg1;
- (long long)registerPath:(id)arg1;
- (void)_updateCacheInfoForPath:(id)arg1 rootPathToTrim:(id)arg2 scanSubDirectories:(BOOL)arg3 cookie:(const void *)arg4;
- (void)dealloc;
- (id)init;

@end

