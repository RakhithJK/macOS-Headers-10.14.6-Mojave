//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PASampleAggregatorOptions : NSObject
{
    BOOL _tabDelineateBinaryImageSections;
    BOOL _binaryImagesBeforeStacks;
    BOOL _printSpinSignatureStack;
    BOOL _printTargetHIDEvent;
    BOOL _printHeavyStacks;
    BOOL _displayHeader;
    BOOL _displayBody;
    BOOL _displayFooter;
    BOOL _displayFrameAddresses;
    BOOL _displaySub1MsCpuTime;
    BOOL _displayStateChangesOnIdleThreads;
    BOOL _displayProcessFirstLastTimes;
    BOOL _displayOffsetsFromUnnamedSymbols;
    BOOL _displaySymbolInformation;
    BOOL _displayBinaryImageAddresses;
    BOOL _displayBinaryImagesLackingNameOrPath;
    BOOL _displayRunningThreads;
    BOOL _displayRunnableThreads;
    BOOL _displayBlockedThreads;
    BOOL _displayIdleWorkQueueThreads;
    BOOL _displayAllBinaries;
    BOOL _displayBlockedReasons;
    BOOL _displayBlockedReasonsLackingProcessOwners;
    BOOL _displayAddressesInBlockedReasons;
    BOOL _displayEmptyBootArgs;
    BOOL _displayAllHIDEvents;
    BOOL _aggregateStacksByThread;
    BOOL _aggregateStacksByProcess;
}

@property BOOL aggregateStacksByProcess; // @synthesize aggregateStacksByProcess=_aggregateStacksByProcess;
@property BOOL aggregateStacksByThread; // @synthesize aggregateStacksByThread=_aggregateStacksByThread;
@property BOOL displayAllHIDEvents; // @synthesize displayAllHIDEvents=_displayAllHIDEvents;
@property BOOL displayEmptyBootArgs; // @synthesize displayEmptyBootArgs=_displayEmptyBootArgs;
@property BOOL displayAddressesInBlockedReasons; // @synthesize displayAddressesInBlockedReasons=_displayAddressesInBlockedReasons;
@property BOOL displayBlockedReasonsLackingProcessOwners; // @synthesize displayBlockedReasonsLackingProcessOwners=_displayBlockedReasonsLackingProcessOwners;
@property BOOL displayBlockedReasons; // @synthesize displayBlockedReasons=_displayBlockedReasons;
@property BOOL displayAllBinaries; // @synthesize displayAllBinaries=_displayAllBinaries;
@property BOOL displayIdleWorkQueueThreads; // @synthesize displayIdleWorkQueueThreads=_displayIdleWorkQueueThreads;
@property BOOL displayBlockedThreads; // @synthesize displayBlockedThreads=_displayBlockedThreads;
@property BOOL displayRunnableThreads; // @synthesize displayRunnableThreads=_displayRunnableThreads;
@property BOOL displayRunningThreads; // @synthesize displayRunningThreads=_displayRunningThreads;
@property BOOL displayBinaryImagesLackingNameOrPath; // @synthesize displayBinaryImagesLackingNameOrPath=_displayBinaryImagesLackingNameOrPath;
@property BOOL displayBinaryImageAddresses; // @synthesize displayBinaryImageAddresses=_displayBinaryImageAddresses;
@property BOOL displaySymbolInformation; // @synthesize displaySymbolInformation=_displaySymbolInformation;
@property BOOL displayOffsetsFromUnnamedSymbols; // @synthesize displayOffsetsFromUnnamedSymbols=_displayOffsetsFromUnnamedSymbols;
@property BOOL displayProcessFirstLastTimes; // @synthesize displayProcessFirstLastTimes=_displayProcessFirstLastTimes;
@property BOOL displayStateChangesOnIdleThreads; // @synthesize displayStateChangesOnIdleThreads=_displayStateChangesOnIdleThreads;
@property BOOL displaySub1MsCpuTime; // @synthesize displaySub1MsCpuTime=_displaySub1MsCpuTime;
@property BOOL displayFrameAddresses; // @synthesize displayFrameAddresses=_displayFrameAddresses;
@property BOOL displayFooter; // @synthesize displayFooter=_displayFooter;
@property BOOL displayBody; // @synthesize displayBody=_displayBody;
@property BOOL displayHeader; // @synthesize displayHeader=_displayHeader;
@property BOOL printHeavyStacks; // @synthesize printHeavyStacks=_printHeavyStacks;
@property BOOL printTargetHIDEvent; // @synthesize printTargetHIDEvent=_printTargetHIDEvent;
@property BOOL printSpinSignatureStack; // @synthesize printSpinSignatureStack=_printSpinSignatureStack;
@property BOOL binaryImagesBeforeStacks; // @synthesize binaryImagesBeforeStacks=_binaryImagesBeforeStacks;
@property BOOL tabDelineateBinaryImageSections; // @synthesize tabDelineateBinaryImageSections=_tabDelineateBinaryImageSections;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property BOOL verbose;
- (id)init;

@end
