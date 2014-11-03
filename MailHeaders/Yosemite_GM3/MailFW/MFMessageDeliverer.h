/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "MCActivityTarget.h"

@class MCMessage, MFDeliveryAccount, NSString;

@interface MFMessageDeliverer : NSObject <MCActivityTarget>
{
    MFDeliveryAccount *_account;
    id <MCMessageDataSource> _messageStore;
    BOOL _askForReadReceipt;
    id <MFMessageDelivererDelegate> _delegate;
    MCMessage *_message;
    long long _deliveryStatus;
}

+ (BOOL)deliverMessage:(id)arg1;
+ (BOOL)deliverMessage:(id)arg1 askForReadReceipt:(BOOL)arg2;
+ (id)newWithMessage:(id)arg1;
@property(nonatomic) long long deliveryStatus; // @synthesize deliveryStatus=_deliveryStatus;
@property(retain, nonatomic) MCMessage *message; // @synthesize message=_message;
@property(nonatomic) BOOL askForReadReceipt; // @synthesize askForReadReceipt=_askForReadReceipt;
@property(nonatomic) __weak id <MFMessageDelivererDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)deliverMessageHeaderData:(id)arg1 bodyData:(id)arg2 toRecipients:(id)arg3;
- (long long)deliverSynchronously;
- (void)deliverAsynchronously;
- (id)_headersForDeliveryFromHeaders:(id)arg1;
- (id)headersForDelivery;
@property(retain, nonatomic) MFDeliveryAccount *account;
- (id)initWithMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

