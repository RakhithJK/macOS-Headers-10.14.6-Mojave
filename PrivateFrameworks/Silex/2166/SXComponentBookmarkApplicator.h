//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXBookmarkApplicator-Protocol.h>

@class NSString;
@protocol SXScrollPositionRestoring;

@interface SXComponentBookmarkApplicator : NSObject <SXBookmarkApplicator>
{
    id <SXScrollPositionRestoring> _scrollPositionRestoring;
}

@property(readonly, nonatomic) id <SXScrollPositionRestoring> scrollPositionRestoring; // @synthesize scrollPositionRestoring=_scrollPositionRestoring;
- (void).cxx_destruct;
- (void)applyBookmark:(id)arg1;
- (id)initWithScrollPositionRestoring:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

