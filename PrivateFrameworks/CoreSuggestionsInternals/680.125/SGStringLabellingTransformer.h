//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/PMLTransformerProtocol-Protocol.h>

@class NSArray, NSDictionary;

@interface SGStringLabellingTransformer : NSObject <PMLTransformerProtocol>
{
    NSArray *_methods;
    NSDictionary *_labelDictionary;
}

+ (id)withLabelStrings:(id)arg1;
- (void).cxx_destruct;
- (id)transform:(id)arg1;
- (id)initWithLabelStrings:(id)arg1;

@end

