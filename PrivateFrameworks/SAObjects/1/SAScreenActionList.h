//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SAAbstractItemList.h>

@class NSString, NSURL;

@interface SAScreenActionList : SAAbstractItemList
{
}

+ (id)listWithDictionary:(id)arg1 context:(id)arg2;
+ (id)list;
@property(copy, nonatomic) NSURL *viewId;
@property(copy, nonatomic) NSString *mainEntitySemanticData;
@property(copy, nonatomic) NSString *appId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

