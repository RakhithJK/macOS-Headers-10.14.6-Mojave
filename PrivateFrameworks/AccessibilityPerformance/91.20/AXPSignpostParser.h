//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AXPSignpostParserConfiguration;

@interface AXPSignpostParser : NSObject
{
    AXPSignpostParserConfiguration *_configuration;
}

@property(copy, nonatomic) AXPSignpostParserConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (id)_allSignpostObjectsFromTestArchiveWithSubsystemCategoryFilter:(id)arg1 archivePath:(id)arg2;
- (id)_wrappedEventFromSignpostEvent:(id)arg1;
- (id)_signpostEventResultsFromSupportObjects:(id)arg1;
- (id)parseSignposts;
- (id)init;

@end

