//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SecurityFoundation/SFRSASigningOperation.h>

@protocol SFMaskGenerationFunction;

__attribute__((visibility("hidden")))
@interface SFRSA_PSSSigningOperation : SFRSASigningOperation
{
    id _pssSigningOperationInternal;
}

- (void).cxx_destruct;
@property(copy, nonatomic) id <SFMaskGenerationFunction> maskGenerationFunction;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeySpecifier:(id)arg1 digestOperation:(id)arg2 maskGenerationFunction:(id)arg3;
- (id)initWithKeySpecifier:(id)arg1 digestOperation:(id)arg2;

@end

