//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, SALocalSearchBusiness2;

@interface SAMovieV2MovieTheater : SADomainObject
{
}

+ (id)movieTheaterWithDictionary:(id)arg1 context:(id)arg2;
+ (id)movieTheater;
@property(copy, nonatomic) NSArray *movies;
@property(retain, nonatomic) SALocalSearchBusiness2 *business;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

