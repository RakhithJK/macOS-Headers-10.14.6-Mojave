//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString;

@interface TDAbstractLayerReference : NSManagedObject
{
    struct CGRect _frameRect;
}

- (void)awakeFromFetch;
@property(nonatomic) struct CGRect frameRect; // @dynamic frameRect;
@property(nonatomic) struct CGRect primitiveFrameRect;

// Remaining properties
@property(retain, nonatomic) NSNumber *blendMode; // @dynamic blendMode;
@property(retain, nonatomic) NSString *frameRectString; // @dynamic frameRectString;
@property(nonatomic) BOOL makeOpaqueIfPossible; // @dynamic makeOpaqueIfPossible;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSNumber *opacity; // @dynamic opacity;

@end

