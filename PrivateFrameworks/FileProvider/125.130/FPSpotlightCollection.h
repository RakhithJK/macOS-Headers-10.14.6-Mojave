//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FileProvider/FPItemCollection.h>

@interface FPSpotlightCollection : FPItemCollection
{
}

- (void)enumerationResultsDidChange;
- (void)enumerationWasResumed;
- (void)stoppingObservation;
- (void)startingObservationWithEnumerationProperties:(id)arg1;
- (void)stopObserving;
- (void)startObservingWithEnumerationProperties:(id)arg1;
- (void)signalError:(id)arg1;
- (id)initWithIdentifier:(id)arg1 fileTypes:(id)arg2;

@end

