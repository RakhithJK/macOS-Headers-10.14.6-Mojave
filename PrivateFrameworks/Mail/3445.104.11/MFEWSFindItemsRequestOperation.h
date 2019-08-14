//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Mail/MFEWSRequestOperation.h>

@class EWSSearchExpressionType, MFEWSFindItemsResponseOperation, NSArray;

@interface MFEWSFindItemsRequestOperation : MFEWSRequestOperation
{
    NSArray *_EWSFolderIdStrings;
    NSArray *_additionalProperties;
    EWSSearchExpressionType *_searchExpression;
}

@property(readonly, nonatomic) EWSSearchExpressionType *searchExpression; // @synthesize searchExpression=_searchExpression;
@property(readonly, copy, nonatomic) NSArray *additionalProperties; // @synthesize additionalProperties=_additionalProperties;
@property(readonly, copy, nonatomic) NSArray *EWSFolderIdStrings; // @synthesize EWSFolderIdStrings=_EWSFolderIdStrings;
- (void).cxx_destruct;
- (id)prepareRequest;
- (id)newResponseOperationWithGateway:(id)arg1 errorHandler:(id)arg2;
@property(retain, nonatomic) MFEWSFindItemsResponseOperation *responseOperation;
- (id)activityString;
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;
- (id)initWithSearchExpression:(id)arg1 EWSFolderIdStrings:(id)arg2 additionalProperties:(id)arg3 gateway:(id)arg4;

@end

