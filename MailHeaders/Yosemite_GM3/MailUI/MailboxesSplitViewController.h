/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class MailSplitView, MessageViewer, NSView;

@interface MailboxesSplitViewController : NSObject
{
    BOOL _isAnimating;
    double _lastUserSelectedPosition;
    NSView *_mailboxesContainer;
    MailSplitView *_mailboxesSplitView;
    MessageViewer *_messageViewer;
}

@property(nonatomic) __weak MessageViewer *messageViewer; // @synthesize messageViewer=_messageViewer;
@property(nonatomic) __weak MailSplitView *mailboxesSplitView; // @synthesize mailboxesSplitView=_mailboxesSplitView;
@property(nonatomic) __weak NSView *mailboxesContainer; // @synthesize mailboxesContainer=_mailboxesContainer;
@property(nonatomic) double lastUserSelectedPosition; // @synthesize lastUserSelectedPosition=_lastUserSelectedPosition;
@property(nonatomic) BOOL isAnimating; // @synthesize isAnimating=_isAnimating;
- (void).cxx_destruct;
- (void)openMailboxesPaneToWidth:(double)arg1;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (BOOL)splitView:(id)arg1 shouldAdjustSizeOfSubview:(id)arg2;
- (struct CGRect)splitView:(id)arg1 additionalEffectiveRectOfDividerAtIndex:(long long)arg2;
- (double)_maxSplitPosition:(id)arg1;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;

@end

