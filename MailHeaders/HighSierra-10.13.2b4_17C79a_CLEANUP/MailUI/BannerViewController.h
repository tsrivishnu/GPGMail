//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSViewController.h"

@class BannerBackgroundView, BannerContainerViewController, ConversationMember, MUIWebDocument, MessageWebDocumentView, NSColor, NSLayoutConstraint, NSLayoutGuide, NSView;

@interface BannerViewController : NSViewController
{
    NSLayoutGuide *_leadingMarginGuide;
    BOOL _loaded;
    BOOL _wantsDisplay;
    BOOL _viewIsLoaded;
    BannerContainerViewController *_container;
    NSView *_leadingView;
    NSLayoutConstraint *_leadingConstraint;
}

+ (id)keyPathsForValuesAffectingWebDocument;
+ (id)keyPathsForValuesAffectingWebDocumentView;
@property(nonatomic) __weak NSLayoutConstraint *leadingConstraint; // @synthesize leadingConstraint=_leadingConstraint;
@property(nonatomic) __weak NSView *leadingView; // @synthesize leadingView=_leadingView;
@property(nonatomic) BOOL viewIsLoaded; // @synthesize viewIsLoaded=_viewIsLoaded;
@property(nonatomic) BannerContainerViewController *container; // @synthesize container=_container;
//- (void).cxx_destruct;
- (void)updateViewConstraints;
@property(nonatomic) __weak NSLayoutGuide *leadingMarginGuide;
- (void)updateWantsDisplay;
- (void)updateBannerContents;
@property(nonatomic) BOOL wantsDisplay;
@property(nonatomic) BOOL loaded;
@property(readonly, nonatomic) MUIWebDocument *webDocument;
@property(readonly, nonatomic) __weak MessageWebDocumentView *webDocumentView;
@property(readonly, nonatomic) NSColor *backgroundColor;
@property(retain) ConversationMember *representedObject;
@property(retain) BannerBackgroundView *view;
@property(readonly, nonatomic) double bannerHeight;
- (void)_bannerViewControllerCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

