/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

@class Conversation, MCMessage, MCMessageBody, MCMessageHeaders, MUIWebDocument, NSArray, NSData, NSDate, NSImage, NSIndexSet, NSMutableArray, NSMutableSet, NSString, WebDocumentGenerator;

@interface ConversationMember : NSObject <NSCopying>
{
    NSMutableSet *_primitiveMessages;
    NSMutableSet *_primaryMessages;
    NSMutableSet *_hiddenMessages;
    NSMutableArray *_asyncLoadCompletionHandlers;
    BOOL _isPrimary;
    BOOL _isDeleted;
    MCMessage *_originalMessage;
    NSImage *_senderImage;
    BOOL _senderIsVIP;
    int _conversationPosition;
    BOOL _primitiveIsUnread;
    BOOL _primitiveIsFlagged;
    NSIndexSet *_primitiveFlagColors;
    unsigned long long _primitiveJunkStatus;
    BOOL _startedLoad;
    BOOL _messageDataCached;
    BOOL _registeredForNotifications;
    BOOL _shouldLogConversationViewUpdates;
    BOOL _senderImageLoadedOrTimedOut;
    MCMessageHeaders *_headers;
    Conversation *_conversation;
    NSArray *_messages;
    WebDocumentGenerator *_documentGenerator;
    NSString *_messageURLString;
}

+ (id)keyPathsForValuesAffectingJunkStatus;
+ (id)keyPathsForValuesAffectingFlagColors;
+ (id)keyPathsForValuesAffectingIsFlagged;
+ (id)keyPathsForValuesAffectingIsUnread;
+ (BOOL)automaticallyNotifiesObserversOfPrimitiveJunkStatus;
+ (BOOL)automaticallyNotifiesObserversOfPrimitiveFlagColors;
+ (BOOL)automaticallyNotifiesObserversOfPrimitiveIsFlagged;
+ (BOOL)automaticallyNotifiesObserversOfPrimitiveIsUnread;
+ (BOOL)automaticallyNotifiesObserversOfConversationPosition;
+ (BOOL)automaticallyNotifiesObserversOfSenderIsVIP;
+ (BOOL)automaticallyNotifiesObserversOfSenderImage;
+ (BOOL)automaticallyNotifiesObserversOfOriginalMessage;
+ (BOOL)automaticallyNotifiesObserversOfIsDeleted;
+ (BOOL)automaticallyNotifiesObserversOfIsPrimary;
+ (id)keyPathsForValuesAffectingSignerNames;
+ (id)keyPathsForValuesAffectingSigners;
+ (id)keyPathsForValuesAffectingIsSigned;
+ (id)keyPathsForValuesAffectingIsEncrypted;
+ (id)keyPathsForValuesAffectingMessageBody;
+ (id)keyPathsForValuesAffectingAttachmentSize;
+ (id)keyPathsForValuesAffectingNumberOfAttachments;
+ (id)keyPathsForValuesAffectingMailboxName;
+ (id)keyPathsForValuesAffectingDateReceived;
+ (id)keyPathsForValuesAffectingSubject;
+ (id)keyPathsForValuesAffectingBccRecipients;
+ (id)keyPathsForValuesAffectingCcRecipients;
+ (id)keyPathsForValuesAffectingToRecipients;
+ (id)keyPathsForValuesAffectingSender;
+ (id)keyPathsForValuesAffectingMessageIDHeaderDigest;
+ (id)keyPathsForValuesAffectingWebDocument;
+ (id)flagsAffectingConversationMember;
@property(copy, nonatomic) NSString *messageURLString; // @synthesize messageURLString=_messageURLString;
@property(nonatomic) BOOL senderImageLoadedOrTimedOut; // @synthesize senderImageLoadedOrTimedOut=_senderImageLoadedOrTimedOut;
@property(readonly, nonatomic) BOOL shouldLogConversationViewUpdates; // @synthesize shouldLogConversationViewUpdates=_shouldLogConversationViewUpdates;
@property(nonatomic) BOOL registeredForNotifications; // @synthesize registeredForNotifications=_registeredForNotifications;
@property(nonatomic) BOOL messageDataCached; // @synthesize messageDataCached=_messageDataCached;
@property(nonatomic) BOOL startedLoad; // @synthesize startedLoad=_startedLoad;
@property(retain, nonatomic) WebDocumentGenerator *documentGenerator; // @synthesize documentGenerator=_documentGenerator;
@property(copy, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property(nonatomic) __weak Conversation *conversation; // @synthesize conversation=_conversation;
@property(retain, nonatomic) MCMessageHeaders *headers; // @synthesize headers=_headers;
//- (void).cxx_destruct;
- (id)messagesInSameMailboxAsOriginalMessage;
- (BOOL)isPrimaryMessage:(id)arg1;
- (void)unhideMessage:(id)arg1;
- (void)hideMessage:(id)arg1;
- (void)removeMessage:(id)arg1;
- (void)addMessage:(id)arg1 isPrimary:(BOOL)arg2;
- (id)_preferredOriginalMessage;
- (void)_reloadOriginalMessage;
- (BOOL)_messageIsInSent:(id)arg1;
- (BOOL)_messageIsInTrashJunkOrOutbox:(id)arg1;
- (BOOL)_messageIsDeleted:(id)arg1;
- (BOOL)_shouldDisplayMessage:(id)arg1;
- (void)updateLastViewedDate;
- (void)_reloadSenderIsVIP;
- (void)_VIPSendersDidChange:(id)arg1;
- (void)_reloadValuesForAggregateFlags;
- (void)flagsChangedForMessage:(id)arg1;
@property(nonatomic) unsigned long long junkStatus;
@property(copy, nonatomic) NSIndexSet *flagColors;
@property(nonatomic) BOOL isFlagged;
@property(nonatomic) BOOL isUnread;
- (void)_addressPhotoChanged:(id)arg1;
- (void)_addressPhotoLoaded:(id)arg1;
- (void)_asyncLoadSenderImage;
- (void)_senderImageTimedOut;
@property(nonatomic) unsigned long long primitiveJunkStatus;
@property(copy, nonatomic) NSIndexSet *primitiveFlagColors;
@property(nonatomic) BOOL primitiveIsFlagged;
@property(nonatomic) BOOL primitiveIsUnread;
@property(nonatomic) int conversationPosition;
@property(nonatomic) BOOL senderIsVIP;
@property(retain, nonatomic) NSImage *senderImage;
@property(retain, nonatomic) MCMessage *originalMessage;
@property(nonatomic) BOOL isDeleted;
@property(nonatomic) BOOL isPrimary;
@property(readonly, nonatomic) NSArray *signerNames;
@property(readonly, nonatomic) NSArray *signers;
@property(readonly, nonatomic) BOOL isSigned;
@property(readonly, nonatomic) BOOL isEncrypted;
@property(readonly, nonatomic) MCMessageBody *messageBody;
@property(readonly, nonatomic) unsigned long long attachmentSize;
@property(readonly, nonatomic) unsigned long long numberOfAttachments;
@property(readonly, copy, nonatomic) NSString *mailboxName;
@property(readonly, copy, nonatomic) NSDate *dateReceived;
@property(readonly, copy, nonatomic) NSString *subject;
@property(readonly, copy, nonatomic) NSArray *bccRecipients;
@property(readonly, copy, nonatomic) NSArray *ccRecipients;
@property(readonly, copy, nonatomic) NSArray *toRecipients;
@property(readonly, copy, nonatomic) NSString *sender;
@property(readonly, copy, nonatomic) NSData *messageIDHeaderDigest;
@property(readonly, nonatomic) MUIWebDocument *webDocument;
- (void)cancelLoad;
- (void)asyncLoadAllowingRemoteFetch:(BOOL)arg1 completionHandler:(id)arg2;
- (void)invalidate;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithMessages:(id)arg1 primaryMessages:(id)arg2 forConversation:(id)arg3;
- (id)initWithMessage:(id)arg1 isPrimary:(BOOL)arg2 forConversation:(id)arg3;
- (id)init;

@end

