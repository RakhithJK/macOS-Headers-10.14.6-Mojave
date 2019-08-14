//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IMTranscoderAgent/IMTranscoder.h>

@interface IMTranscoder_AV : IMTranscoder
{
}

+ (id)supportedUTIs;
- (void)validateFileTransfer:(id)arg1 utiType:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)transcodeFileTransfer:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 maxDimension:(unsigned long long)arg6 transcoderUserInfo:(id)arg7 representations:(long long)arg8 completionBlock:(CDUnknownBlockType)arg9;
- (void)_transcodeVideoAsync:(id)arg1 target:(long long)arg2 maxBytes:(unsigned long long)arg3 userInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (unsigned long long)_fileSizeForTransfer:(id)arg1 error:(id)arg2;
- (long long)shouldTranscodeTransfer:(id)arg1 transcoderUserInfo:(id)arg2 target:(long long)arg3 utiType:(id)arg4 allowUnfilteredUTIs:(id)arg5 fileSizeLimit:(unsigned long long)arg6;
- (BOOL)_isHEVCVideo:(id)arg1;

@end

