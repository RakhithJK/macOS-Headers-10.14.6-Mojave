//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet;

@interface ABMetadataIgnoredDirectories : NSObject
{
    NSCountedSet *_ignoredDirectories;
}

- (void).cxx_destruct;
- (BOOL)shouldIngoreDirectory:(id)arg1;
- (void)removeDirectory:(id)arg1;
- (void)addDirectory:(id)arg1;
- (void)runWithIgnoredDirectory:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)init;

@end

