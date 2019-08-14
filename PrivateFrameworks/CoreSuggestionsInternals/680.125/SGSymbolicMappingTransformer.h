//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/PMLTransformerProtocol-Protocol.h>

@class NSCharacterSet, NSString;

@interface SGSymbolicMappingTransformer : NSObject <PMLTransformerProtocol>
{
    NSString *_numericMapping;
    NSString *_characterMapping;
    NSCharacterSet *_characterSet;
}

+ (id)withNumericMapping:(id)arg1 andSymbolicMapping:(id)arg2;
@property(retain) NSCharacterSet *characterSet; // @synthesize characterSet=_characterSet;
@property(retain) NSString *characterMapping; // @synthesize characterMapping=_characterMapping;
@property(retain) NSString *numericMapping; // @synthesize numericMapping=_numericMapping;
- (void).cxx_destruct;
- (id)transform:(id)arg1;
- (id)initWithNumericMapping:(id)arg1 andSymbolicMapping:(id)arg2;

@end

