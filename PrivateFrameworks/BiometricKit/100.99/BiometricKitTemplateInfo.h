//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface BiometricKitTemplateInfo : NSObject
{
    NSArray *_topology;
    NSDictionary *_details;
}

@property(retain, nonatomic) NSDictionary *details; // @synthesize details=_details;
@property(retain, nonatomic) NSArray *topology; // @synthesize topology=_topology;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

