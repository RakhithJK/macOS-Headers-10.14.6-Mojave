//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AudioServerDriver/ASDDSPItemInfo.h>

@class NSDictionary, NSString;

@interface ASDPropertyStripInfo : ASDDSPItemInfo
{
    NSString *_path;
    NSDictionary *_value;
}

@property(readonly, nonatomic) NSDictionary *value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1 resourcePath:(id)arg2;

@end

