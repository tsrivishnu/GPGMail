//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class MCFileWrapper, NSArray, NSData, NSImage, NSMutableArray, NSString, NSView/*<MCStationeryCompositeImageView>*/;

@interface MCStationeryCompositeImage : NSObject
{
    NSData *_baseImageData;	// 8 = 0x8
    NSData *_overlayImageData;	// 16 = 0x10
    NSMutableArray *_userImages;	// 24 = 0x18
    BOOL _isReadOnly;	// 32 = 0x20
    NSArray *_masks;	// 40 = 0x28
    NSView/*<MCStationeryCompositeImageView>*/ *_view;	// 48 = 0x30
    NSString *_contentID;	// 56 = 0x38
    NSString *_preferredFilename;	// 64 = 0x40
    unsigned long long _index;	// 72 = 0x48
}

@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) BOOL isReadOnly; // @synthesize isReadOnly=_isReadOnly;
@property(copy, nonatomic) NSString *preferredFilename; // @synthesize preferredFilename=_preferredFilename;
@property(copy, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
@property(nonatomic) __weak NSView/*<MCStationeryCompositeImageView>*/ *view; // @synthesize view=_view;
@property(copy, nonatomic) NSArray *masks; // @synthesize masks=_masks;
//- (void).cxx_destruct;	// IMP=0x00000000000a3abe
@property(readonly, nonatomic) MCFileWrapper *fileWrapper;
@property(readonly, nonatomic) BOOL isPlaceholder;
@property(readonly, nonatomic) long long approximateSize;
@property(readonly, copy, nonatomic) NSString *filenameForCompositedImage;
@property(readonly, copy, nonatomic) NSString *mimeTypeForCompositedImage;
@property(readonly, copy, nonatomic) NSData *dataForCompositedImage;
@property(readonly, nonatomic) unsigned long long numberOfDropZones;
@property(readonly, copy, nonatomic) NSArray *userImagesToSave;
@property(readonly, copy, nonatomic) NSArray *userImages;
- (void)addUserImage:(id)arg1;	// IMP=0x00000000000a372d
@property(readonly, copy, nonatomic) NSImage *overlayImage;
- (void)setOverlayImageData:(id)arg1;	// IMP=0x00000000000a3628
@property(readonly, copy, nonatomic) NSImage *baseImage;
- (void)setBaseImageData:(id)arg1;	// IMP=0x00000000000a3523
@property(readonly, nonatomic) BOOL isValid;
@property(readonly, copy, nonatomic) NSData *data;
- (id)initWithData:(id)arg1;	// IMP=0x00000000000a2cea
- (id)init;	// IMP=0x00000000000a2c87

@end

