//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PRSL2FeatureVectorProcessingContext : NSObject
{
    unsigned short *_expandedFeatureExecutionOrder;
    unsigned long long _expandedFeatureCount;
}

@property(nonatomic) unsigned long long expandedFeatureCount; // @synthesize expandedFeatureCount=_expandedFeatureCount;
@property(nonatomic) unsigned short *expandedFeatureExecutionOrder; // @synthesize expandedFeatureExecutionOrder=_expandedFeatureExecutionOrder;
- (void)dealloc;
- (id)initWithFeatureOrder:(id)arg1 withInflation:(unsigned long long)arg2 withInflatedIndexToSize:(id)arg3;

@end

