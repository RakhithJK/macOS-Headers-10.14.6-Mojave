//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebDriver/NSCopying-Protocol.h>

@class NSString;

@interface WDInputSource : NSObject <NSCopying>
{
    long long _type;
    NSString *_sourceId;
}

@property(copy, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqualToInputSource:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(long long)arg1 sourceId:(id)arg2;

@end

