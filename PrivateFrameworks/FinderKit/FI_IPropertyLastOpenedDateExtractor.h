//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FinderKit/FI_IPropertyDateExtractor.h>

__attribute__((visibility("hidden")))
@interface FI_IPropertyLastOpenedDateExtractor : FI_IPropertyDateExtractor
{
}

- (void)flush;
- (_Bool)needsUpdateForProperty:(unsigned int)arg1;
- (id)extractValueFromNodes:(const struct TFENodeVector *)arg1;
-     // Error parsing type: v32@0:8r^{TFENodeVector=^{TFENode}^{TFENode}{__compressed_pair<TFENode *, std::__1::allocator<TFENode> >=^{TFENode}}}16r^{atomic<bool>=AB}24, name: prefetchValueOnSecondaryThread:cancelled:
- (id)defaultValue;
- (id)init;

@end

