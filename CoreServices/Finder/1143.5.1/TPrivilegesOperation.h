//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IAsyncNodeOperation.h"

@interface TPrivilegesOperation : IAsyncNodeOperation
{
}

- (int)cancelOperation;
- (int)startSuboperation:(unsigned int)arg1 fileSecurityRef:(struct __FSFileSecurity *)arg2;
- (struct TString)authorizationPrompt;
- (void)configureOperationRecord:(struct TOperationRecord *)arg1 forNode:(const struct TFENode *)arg2;

@end

