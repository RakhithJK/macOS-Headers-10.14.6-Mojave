//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import <DocumentManager/DOCViewServiceErrorViewDelegate-Protocol.h>

@class DOCViewServiceErrorView, NSString;
@protocol DOCViewServiceErrorViewControllerDelegate;

@interface DOCViewServiceErrorViewController : UIViewController <DOCViewServiceErrorViewDelegate>
{
    DOCViewServiceErrorView *_errorView;
    id <DOCViewServiceErrorViewControllerDelegate> _delegate;
}

@property __weak id <DOCViewServiceErrorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapTryAgainInErrorView:(id)arg1;
@property(retain, nonatomic) NSString *errorSubtitle;
@property(retain, nonatomic) NSString *errorTitle;
- (void)loadView;

@end

