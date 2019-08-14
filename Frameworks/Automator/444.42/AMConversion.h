//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Automator/NSCopying-Protocol.h>
#import <Automator/NSSecureCoding-Protocol.h>

@class NSArray, NSError, NSString;

@interface AMConversion : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_inputType;
    NSString *_outputType;
    NSError *_error;
    NSArray *_preferredPath;
    NSArray *_pathTaken;
    NSArray *_paths;
}

+ (BOOL)supportsSecureCoding;
+ (id)conversionWithInputType:(id)arg1 outputType:(id)arg2 paths:(id)arg3 error:(id)arg4;
@property(retain, nonatomic) NSArray *pathTaken; // @synthesize pathTaken=_pathTaken;
@property(retain, nonatomic) NSArray *paths; // @synthesize paths=_paths;
@property(retain, nonatomic) NSArray *preferredPath; // @synthesize preferredPath=_preferredPath;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *outputType; // @synthesize outputType=_outputType;
@property(retain, nonatomic) NSString *inputType; // @synthesize inputType=_inputType;
- (void).cxx_destruct;
- (void)updateWithConversionFromXPC:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)sortedPathsForPaths:(id)arg1;
@property(readonly, nonatomic) unsigned long long preferredPathCount;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

