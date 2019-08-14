//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface CALSoundFileManager : NSObject
{
    NSMutableArray *_soundFiles;
}

+ (id)sharedCALSoundFileManager;
+ (void)initialize;
- (void).cxx_destruct;
- (id)init;
- (long long)count;
- (id)soundFileAtIndex:(long long)arg1;
- (void)findCALSoundFiles;
- (void)sortByName;
- (void)addCALSoundFilesFromDirectory:(id)arg1 asType:(int)arg2;

@end

