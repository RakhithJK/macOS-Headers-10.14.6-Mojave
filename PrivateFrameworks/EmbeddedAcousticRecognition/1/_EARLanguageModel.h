//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _EARLanguageModel : NSObject
{
    struct vector<std::__1::pair<id<_EARLanguageModelDataSource>, float>, std::__1::allocator<std::__1::pair<id<_EARLanguageModelDataSource>, float>>> _dataSources;
    float _totalWeight;
}

@property(readonly, nonatomic) float totalWeight; // @synthesize totalWeight=_totalWeight;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)enumerateDataSourcesAndWeightsUsingBlock:(CDUnknownBlockType)arg1;
- (void)addDataSource:(id)arg1 weight:(float)arg2;

@end
