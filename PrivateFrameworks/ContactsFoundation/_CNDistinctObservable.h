//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsFoundation/CNObservable.h>

@class NSMutableSet;
@protocol CNObservable;

@interface _CNDistinctObservable : CNObservable
{
    id <CNObservable> _observable;
    NSMutableSet *_previouslyObservedResults;
}

- (void).cxx_destruct;
- (BOOL)_resultIsDistinct:(id)arg1;
- (id)subscribe:(id)arg1;
- (id)initWithObservable:(id)arg1;

@end
