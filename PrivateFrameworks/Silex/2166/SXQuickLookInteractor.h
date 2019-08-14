//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXQuickLookInteractor-Protocol.h>

@class NSString, SXQuickLookFile;
@protocol SXQuickLookInteractorDelegate, SXQuickLookService;

@interface SXQuickLookInteractor : NSObject <SXQuickLookInteractor>
{
    id <SXQuickLookInteractorDelegate> delegate;
    SXQuickLookFile *_file;
    id <SXQuickLookService> _service;
}

@property(readonly, nonatomic) id <SXQuickLookService> service; // @synthesize service=_service;
@property(readonly, nonatomic) SXQuickLookFile *file; // @synthesize file=_file;
@property(nonatomic) __weak id <SXQuickLookInteractorDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)loadThumbnailWithSize:(struct CGSize)arg1;
- (id)initWithFile:(id)arg1 service:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

