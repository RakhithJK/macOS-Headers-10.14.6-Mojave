//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Mail/MFEWSResponseOperation.h>

@class EWSCreateItemResponseType, NSString;

@interface MFEWSCreateItemResponseOperation : MFEWSResponseOperation
{
    NSString *_itemId;
}

@property(copy) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (void)executeOperation;
- (void)prepareToExecuteWithResponse:(id)arg1 forRequestOperation:(id)arg2;
@property(retain) EWSCreateItemResponseType *response;

@end
