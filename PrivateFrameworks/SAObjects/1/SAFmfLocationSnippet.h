//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSNumber, NSString, NSURL;

@interface SAFmfLocationSnippet : SAUISnippet
{
}

+ (id)locationSnippetWithDictionary:(id)arg1 context:(id)arg2;
+ (id)locationSnippet;
@property(copy, nonatomic) NSURL *searchContext;
@property(copy, nonatomic) NSString *proximity;
@property(copy, nonatomic) NSArray *locations;
@property(copy, nonatomic) NSNumber *atRequestedLocation;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

