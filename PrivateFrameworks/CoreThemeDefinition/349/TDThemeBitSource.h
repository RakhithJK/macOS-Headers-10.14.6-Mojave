//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

@interface TDThemeBitSource : NSManagedObject
{
}

- (id)fileURLWithDocument:(id)arg1;
- (id)filePathWithDocument:(id)arg1;
- (void)setName:(id)arg1;
- (id)name;

// Remaining properties
@property(retain, nonatomic) NSSet *assets; // @dynamic assets;
@property(retain, nonatomic) NSString *path; // @dynamic path;

@end
