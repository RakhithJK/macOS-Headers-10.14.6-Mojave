//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXActionActivityProvider-Protocol.h>

@class NSString;
@protocol SXBookmarkManager;

@interface SXBookmarkActionActivityProvider : NSObject <SXActionActivityProvider>
{
    id <SXBookmarkManager> _bookmarkManager;
}

@property(readonly, nonatomic) id <SXBookmarkManager> bookmarkManager; // @synthesize bookmarkManager=_bookmarkManager;
- (void).cxx_destruct;
- (id)activityGroupForAction:(id)arg1;
- (id)initWithBookmarkManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

