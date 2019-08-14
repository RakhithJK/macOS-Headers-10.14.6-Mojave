//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DistributedEvaluation/NSCopying-Protocol.h>

@class NSArray, NSDictionary;

@interface DESRecipe : NSObject <NSCopying>
{
    NSDictionary *_recipeUserInfo;
    NSArray *_attachments;
    NSDictionary *_parametersUsed;
}

+ (void)initialize;
@property(readonly, copy, nonatomic) NSDictionary *parametersUsed; // @synthesize parametersUsed=_parametersUsed;
@property(copy, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(readonly, copy, nonatomic) NSDictionary *recipeUserInfo; // @synthesize recipeUserInfo=_recipeUserInfo;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithRecipeResponse:(id)arg1 error:(id *)arg2;
- (id)_initWithRecipeUserInfo:(id)arg1;

@end

