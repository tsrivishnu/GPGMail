/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "MCMessageSortingInterface-Protocol.h"
#import "MCMessageDataSource-Protocol.h"
#import "CDStructures.h"

@class NSArray, NSData, NSMutableSet, NSSet, NSString, NSUUID;

#ifndef CDSTRUCT_ACCEFCCD
typedef struct {
    unsigned int colorHasBeenEvaluated:1;
    unsigned int colorWasSetManually:1;
    unsigned int redColor:8;
    unsigned int greenColor:8;
    unsigned int blueColor:8;
    unsigned int loadingBody:1;
    unsigned int firstUnused:2;
    unsigned int isMarkedForOverwrite:1;
    unsigned int unused:2;
} CDStruct_accefccd;
#define CDSTRUCT_ACCEFCCD 1
#endif

@interface MCMessage : NSObject <MCMessageSortingInterface, NSCopying>
{
    id <MCMessageDataSource> _dataSource;
    NSString *_senderDisplayName;
    NSString *_subject;
    NSArray *_toRecipients;
    NSString *_sender;
    NSData *_messageIDHeaderDigest;
    NSData *_inReplyToHeaderDigest;
    NSUUID *_documentID;
    unsigned int _messageFlags;
    CDStruct_accefccd _flags;
    BOOL _type;
    double _dateSentInterval;
    double _dateReceivedInterval;
    double _dateLastViewedInterval;
    unsigned char _subjectPrefixLength;
    NSMutableSet *_gmailLabels;
    BOOL _recipientType;
}

+ (BOOL)isMessageURLString:(id)arg1;
+ (unsigned long long)displayablePriorityForPriority:(unsigned int)arg1;
+ (unsigned int)validatePriority:(unsigned int)arg1;
+ (BOOL)colorIsSetInMoreFlags:(CDStruct_accefccd)arg1;
+ (BOOL)allMessages:(id)arg1 areSameType:(BOOL)arg2;
+ (unsigned char)subjectPrefixLengthUnknown;
+ (id)unreadMessagesFromMessages:(id)arg1;
+ (BOOL)_messageTypeForMessageTypeKey:(id)arg1;
+ (id)messageTypeKeyForMessageType:(BOOL)arg1;
+ (id)descriptionForType:(BOOL)arg1 plural:(BOOL)arg2;
+ (id)replyPrefixWithSpacer:(BOOL)arg1;
+ (id)forwardedMessagePrefixWithSpacer:(BOOL)arg1;
+ (id)messageWithRFC822Data:(id)arg1 sanitizeData:(BOOL)arg2;
+ (id)messageWithRFC822Data:(id)arg1;
+ (void)initialize;
@property BOOL recipientType; // @synthesize recipientType=_recipientType;
@property double primitiveDateLastViewedInterval; // @synthesize primitiveDateLastViewedInterval=_dateLastViewedInterval;
@property double primitiveDateReceivedInterval; // @synthesize primitiveDateReceivedInterval=_dateReceivedInterval;
@property double primitiveDateSentInterval; // @synthesize primitiveDateSentInterval=_dateSentInterval;
@property BOOL primitiveMessageType; // @synthesize primitiveMessageType=_type;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3;
- (BOOL)calculateAttachmentInfoFromBody:(id)arg1 numberOfAttachments:(unsigned int *)arg2 isSigned:(char *)arg3 isEncrypted:(char *)arg4 force:(BOOL)arg5;
- (BOOL)calculateAttachmentInfoFromBody:(id)arg1 numberOfAttachments:(unsigned int *)arg2 isSigned:(char *)arg3 isEncrypted:(char *)arg4;
- (void)setAttachmentInfoFromBody:(id)arg1 forced:(BOOL)arg2;
- (void)setAttachmentInfoFromBody:(id)arg1;
- (void)forceSetAttachmentInfoFromBody:(id)arg1;
- (void)_calculateAttachmentInfoFromBody:(id)arg1;
- (BOOL)hasCachedDataForMimePart:(id)arg1;
- (id)dataForMimePart:(id)arg1;
- (id)headerData;
- (id)headerDataFetchIfNotAvailable:(BOOL)arg1 allowPartial:(BOOL)arg2;
- (id)bodyData;
- (id)bodyDataFetchIfNotAvailable:(BOOL)arg1 allowPartial:(BOOL)arg2;
- (id)persistentID;
@property(readonly) BOOL isThread;
- (id)URLStringIfAvailable;
- (id)URLString;
- (id)_URLFetchIfNotAvailable:(BOOL)arg1;
- (id)originalMailboxURLString;
- (id)remoteMailboxURLString;
- (id)account;
- (id)path;
- (CDStruct_accefccd)moreMessageFlags;
- (unsigned int)uidForSort;
- (unsigned int)uid;
- (id)remoteID;
- (id)references;
- (void)setMessageInfoFromMessage:(id)arg1;
- (void)setMessageInfo:(id)arg1 subjectPrefixLength:(unsigned char)arg2 to:(id)arg3 sender:(id)arg4 type:(BOOL)arg5 dateReceivedTimeIntervalSince1970:(double)arg6 dateSentTimeIntervalSince1970:(double)arg7 messageIDHeaderDigest:(id)arg8 inReplyToHeaderDigest:(id)arg9 dateLastViewedTimeIntervalSince1970:(double)arg10;
- (void)setTo:(id)arg1;
- (id)to;
- (id)senderDisplayName;
- (id)senderIfAvailable;
- (void)setSender:(id)arg1;
- (id)sender;
- (void)setDateLastViewedTimeIntervalSince1970:(double)arg1;
- (double)dateLastViewedAsTimeIntervalSince1970;
- (id)dateLastViewed;
- (void)setDateSentTimeIntervalSince1970:(double)arg1;
- (double)dateSentAsTimeIntervalSince1970;
- (double)dateReceivedAsTimeIntervalSince1970;
- (void)setDateReceivedTimeIntervalSince1970:(double)arg1;
- (id)dateSent;
- (id)dateReceived;
- (BOOL)supportsSnippets;
- (void)setSubjectPrefixLength:(unsigned char)arg1;
- (void)setSubject:(id)arg1;
- (id)subjectIfAvailable;
- (id)subject;
- (id)subjectNotIncludingReAndFwdPrefix;
- (id)subjectAndPrefixLength:(unsigned long long *)arg1;
- (void)loadCachedHeaderValuesFromHeaders:(id)arg1 type:(BOOL)arg2;
- (void)_setDateSentFromHeaders:(id)arg1;
- (void)_setDateReceivedFromHeaders:(id)arg1;
- (id)_newDateFromDateHeaderInHeaders:(id)arg1;
- (id)_newDateFromHeader:(id)arg1 inHeaders:(id)arg2;
- (id)_newDateFromReceivedHeadersInHeaders:(id)arg1;
- (BOOL)_doesDateAppearToBeSane:(id)arg1;
- (id)rawSourceFromHeaders:(id)arg1 body:(id)arg2;
- (long long)priority;
- (void)setPriorityFromHeaders:(id)arg1;
- (long long)junkMailLevel;
- (unsigned long long)numberOfAttachments;
- (BOOL)hasCalculatedNumberOfAttachments;
- (id)stringForJunk:(id)arg1;
- (id)stringForJunk;
- (id)stringForIndexingUpdatingBodyFlags:(BOOL)arg1;
- (id)stringForBodyContent;
- (id)stringForIndexing;
- (id)stringValueRenderMode:(long long)arg1 updateBodyFlags:(BOOL)arg2 junkRecorder:(id)arg3 bodyOnly:(BOOL)arg4;
- (BOOL)isPartialMessageBodyAvailable;
- (BOOL)isMessageContentsLocallyAvailable;
- (id)_inReplyToHeaderDigestIvar;
- (void)setInReplyToHeaderDigest:(id)arg1;
- (void)unlockedSetInReplyToHeaderDigest:(id)arg1;
- (BOOL)isReply;
- (id)inReplyToHeaderDigest;
- (id)_messageIDHeaderDigestIvar;
- (void)setMessageIDHeaderDigest:(id)arg1;
- (void)unlockedSetMessageIDHeaderDigest:(id)arg1;
- (id)messageIDHeaderDigest;
- (id)messageID;
- (id)attributedString;
- (unsigned long long)messageSize;
- (void)dealloc;
- (void)setColor:(id)arg1 hasBeenEvaluated:(BOOL)arg2 flags:(unsigned int)arg3 mask:(unsigned int)arg4;
- (void)setPrimitiveColor:(id)arg1 hasBeenEvaluated:(BOOL)arg2 flags:(unsigned int)arg3 mask:(unsigned int)arg4;
- (void)setColorHasBeenEvaluated:(BOOL)arg1;
- (void)setPrimitiveColorHasBeenEvaluated:(BOOL)arg1;
- (void)setColor:(id)arg1;
- (void)setPrimitiveColor:(id)arg1;
- (void)setMarkedForOverwrite:(BOOL)arg1;
- (BOOL)isMarkedForOverwrite;
- (int)colorForSort;
- (int)colorIntValue;
- (id)color;
- (BOOL)colorHasBeenEvaluated;
- (id)messageDataIncludingFromSpace:(BOOL)arg1 newDocumentID:(id)arg2;
- (id)messageDataIncludingFromSpace:(BOOL)arg1;
- (id)messageBodyIfAvailableUpdatingFlags:(BOOL)arg1;
- (id)messageBodyForIndexingAttachments;
- (id)messageBodyUpdatingFlags:(BOOL)arg1;
- (id)messageBodyFetchIfNotAvailable:(BOOL)arg1 allowPartial:(BOOL)arg2;
- (id)messageBodyIfAvailable;
- (id)messageBody;
- (id)attachmentNamesIfAvailable;
- (void)removeGmailLabels:(id)arg1;
- (void)addGmailLabels:(id)arg1;
@property(retain) NSSet *gmailLabels;
- (void)setMessageFlags:(unsigned int)arg1 mask:(unsigned int)arg2;
- (void)setPrimitiveMessageFlags:(unsigned int)arg1 mask:(unsigned int)arg2;
- (unsigned int)messageFlags;
- (void)setDocumentID:(id)arg1;
- (id)documentID;
- (BOOL)isMessageMeeting;
- (BOOL)isEditable;
- (void)setType:(BOOL)arg1;
- (BOOL)type;
- (id)headersIfAvailable;
- (id)headers;
- (void)_cacheMessageBodyDataIfPossible:(id)arg1;
- (id)_cachedMessageBodyData;
- (void)_cacheMessageBodyIfPossible:(id)arg1;
- (id)_cachedMessageBody;
- (void)_cacheHeaderDataIfPossible:(id)arg1;
- (id)_cachedHeaderData;
- (void)_cacheHeadersIfPossible:(id)arg1;
- (id)_cachedHeaders;
- (void)uncacheBodyAndHeader;
- (void)cacheBodyAndHeader;
- (id)mailbox;
- (BOOL)dataSourceShouldBeSet;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)renderString:(id)arg1;
- (void)renderBody:(id)arg1;
- (void)renderHeaders:(id)arg1;

@end

