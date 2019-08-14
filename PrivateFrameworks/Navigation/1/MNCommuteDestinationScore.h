//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MNCommuteDestination, MNCommuteDestinationSuggestion, NSDate, NSHashTable, NSString;

__attribute__((visibility("hidden")))
@interface MNCommuteDestinationScore : NSObject
{
    BOOL _destinationInvalid;
    int _score;
    NSDate *_lastUpdate;
    MNCommuteDestination *_destination;
    NSString *_descriptionExtras;
    NSHashTable *_observers;
}

+ (id)sessionStartDateOrNow;
+ (id)sessionStartDate;
+ (void)setSessionStartDate:(id)arg1;
+ (double)weight;
@property(retain) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly) NSString *descriptionExtras; // @synthesize descriptionExtras=_descriptionExtras;
@property(nonatomic) __weak MNCommuteDestination *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) NSDate *lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property(readonly) int score; // @synthesize score=_score;
@property(readonly) BOOL destinationInvalid; // @synthesize destinationInvalid=_destinationInvalid;
- (void).cxx_destruct;
- (id)description;
- (void)notifyObservers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly) MNCommuteDestinationSuggestion *destinationSuggestion;
- (void)lastUpdateIsNow;
- (void)updateScoreIfPossible;
@property(readonly) double weightedScore;
- (id)initWithDestination:(id)arg1;
- (id)init;

@end

