//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UASharedPasteboardIRManager : NSObject
{
    NSMutableDictionary *_lookupTable;
}

+ (id)sharedIRManager;
@property(retain) NSMutableDictionary *lookupTable; // @synthesize lookupTable=_lookupTable;
- (void).cxx_destruct;
- (id)converterForType:(id)arg1;
- (void)registerIRHandlerClass:(Class)arg1 forType:(id)arg2;
- (id)registeredConverters;
- (void)initializeConverters;
- (id)init;

@end

