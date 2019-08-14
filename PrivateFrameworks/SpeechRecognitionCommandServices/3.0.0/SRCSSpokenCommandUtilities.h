//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface SRCSSpokenCommandUtilities : NSObject
{
    NSDictionary *_commandAttributes;
    NSMutableDictionary *_commandStringsTablesByLocaleIdentifier;
}

+ (id)sharedSpokenCommandUtilities;
- (void)_flushBuiltInCommandsStringsTable;
- (id)commandStringsTableForLocaleIdentifier:(id)arg1;
- (id)oldOSXIDForNewCommandID:(id)arg1;
- (id)newIDForOldOSXCommandID:(id)arg1;
- (id)commandAttributes;
- (void)dealloc;
- (id)init;

@end

