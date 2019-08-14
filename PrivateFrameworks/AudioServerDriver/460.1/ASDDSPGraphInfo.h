//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AudioServerDriver/ASDDSPItemInfo.h>

@class NSArray, NSDictionary, NSString;

@interface ASDDSPGraphInfo : ASDDSPItemInfo
{
    NSString *_path;
    NSString *_text;
    NSArray *_includePaths;
    NSDictionary *_substitutions;
}

@property(retain, nonatomic) NSDictionary *substitutions; // @synthesize substitutions=_substitutions;
@property(retain, nonatomic) NSArray *includePaths; // @synthesize includePaths=_includePaths;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1 resourcePath:(id)arg2;

@end

