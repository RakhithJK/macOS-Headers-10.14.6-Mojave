//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CertificateContainerView, EmptyView, KeychainItemBasic, SFCertificateView;

@interface CertificateView : NSView
{
    SFCertificateView *_certView;
    CertificateContainerView *_certContainerView;
    EmptyView *_emptyView;
    KeychainItemBasic *_item;
}

- (void)dealloc;
- (void)populateSubviews;
- (id)initWithFrame:(struct CGRect)arg1 item:(id)arg2;

@end
