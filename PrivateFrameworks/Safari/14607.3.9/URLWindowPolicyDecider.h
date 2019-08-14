//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSEvent;

__attribute__((visibility("hidden")))
@interface URLWindowPolicyDecider : NSObject
{
    BOOL _middleMouseButtonWasClicked;
    BOOL _respectKeyEquivalents;
    BOOL _forOpeningCloudTab;
    BOOL _requireCommandKey;
    BOOL _commandClickCreatesNewTabs;
    BOOL _newTabsAndWindowsOpenInFront;
    unsigned int _navigationType;
    NSEvent *_event;
    unsigned long long _eventType;
    unsigned long long _eventModifierFlags;
    CDUnknownBlockType _shouldNavigateToFavoriteInResponseToKeyEventDecider;
}

+ (id)defaultDeciderForEvent:(id)arg1;
+ (id)defaultDeciderForCurrentEvent;
+ (id)defaultDecider;
@property(copy, nonatomic) CDUnknownBlockType shouldNavigateToFavoriteInResponseToKeyEventDecider; // @synthesize shouldNavigateToFavoriteInResponseToKeyEventDecider=_shouldNavigateToFavoriteInResponseToKeyEventDecider;
@property(nonatomic) unsigned int navigationType; // @synthesize navigationType=_navigationType;
@property(nonatomic) BOOL newTabsAndWindowsOpenInFront; // @synthesize newTabsAndWindowsOpenInFront=_newTabsAndWindowsOpenInFront;
@property(nonatomic) BOOL commandClickCreatesNewTabs; // @synthesize commandClickCreatesNewTabs=_commandClickCreatesNewTabs;
@property(nonatomic) BOOL requireCommandKey; // @synthesize requireCommandKey=_requireCommandKey;
@property(nonatomic, getter=isForOpeningCloudTab) BOOL forOpeningCloudTab; // @synthesize forOpeningCloudTab=_forOpeningCloudTab;
@property(nonatomic) BOOL respectKeyEquivalents; // @synthesize respectKeyEquivalents=_respectKeyEquivalents;
@property(nonatomic) BOOL middleMouseButtonWasClicked; // @synthesize middleMouseButtonWasClicked=_middleMouseButtonWasClicked;
@property(nonatomic) unsigned long long eventModifierFlags; // @synthesize eventModifierFlags=_eventModifierFlags;
@property(nonatomic) unsigned long long eventType; // @synthesize eventType=_eventType;
@property(retain, nonatomic) NSEvent *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (long long)_decidePolicyForNavigationEvent;
- (long long)_decidePolicyForCreatingWindowOrTab;
- (long long)_decidePolicyForStandardEvent;
- (long long)decidePolicy;
- (id)init;

@end
