//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNUIPeopleGroup : NSObject
{
    NSString *_name;
    NSString *_identifier;
    NSString *_sourceKind;
}

+ (id)peopleGroupWithName:(id)arg1 identifier:(id)arg2 sourceKind:(id)arg3;
@property(copy, nonatomic) NSString *sourceKind; // @synthesize sourceKind=_sourceKind;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;

@end

