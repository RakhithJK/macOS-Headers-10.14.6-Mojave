//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUI/PUExtensionHostContext.h>

#import <PhotosUI/PUEditingExtensionHost-Protocol.h>

@interface PUEditingExtensionHostContext : PUExtensionHostContext <PUEditingExtensionHost>
{
    CDUnknownBlockType _contentEditingOutputCommitHandler;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
@property(copy) CDUnknownBlockType contentEditingOutputCommitHandler; // @synthesize contentEditingOutputCommitHandler=_contentEditingOutputCommitHandler;
- (void).cxx_destruct;
- (void)commitContentEditingOutput:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end

