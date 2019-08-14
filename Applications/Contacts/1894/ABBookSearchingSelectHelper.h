//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABGroupSelectHelper-Protocol.h"

@class ABGroupSearchingContext, ABMainWindowViewModel, NSString;

@interface ABBookSearchingSelectHelper : NSObject <ABGroupSelectHelper>
{
    ABGroupSearchingContext *_searchingContext;
    ABMainWindowViewModel *_mainWindowViewModel;
}

- (void)performSelect;
- (void)dealloc;
- (id)initWithSearchingContext:(id)arg1 mainWindowViewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

