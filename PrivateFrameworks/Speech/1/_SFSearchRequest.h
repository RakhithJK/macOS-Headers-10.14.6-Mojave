//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface _SFSearchRequest : NSObject
{
    long long _searchTypes;
    NSDictionary *_headerFields;
    NSDictionary *_queryParameters;
}

@property(copy, nonatomic) NSDictionary *queryParameters; // @synthesize queryParameters=_queryParameters;
@property(copy, nonatomic) NSDictionary *headerFields; // @synthesize headerFields=_headerFields;
@property(nonatomic) long long searchTypes; // @synthesize searchTypes=_searchTypes;
- (void).cxx_destruct;

@end
