//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;

@interface _MFRoutingDictionaryContext : NSObject
{
    NSMutableArray *_transferredOrDeleted;
    NSMutableArray *_rejectedMessages;
    NSMutableArray *_messagesToBeDeleted;
    NSMutableSet *_destinationStores;
}

@property(retain, nonatomic) NSMutableSet *destinationStores; // @synthesize destinationStores=_destinationStores;
@property(retain, nonatomic) NSMutableArray *messagesToBeDeleted; // @synthesize messagesToBeDeleted=_messagesToBeDeleted;
@property(retain, nonatomic) NSMutableArray *rejectedMessages; // @synthesize rejectedMessages=_rejectedMessages;
@property(retain, nonatomic) NSMutableArray *transferredOrDeleted; // @synthesize transferredOrDeleted=_transferredOrDeleted;
- (void).cxx_destruct;
- (id)description;

@end

