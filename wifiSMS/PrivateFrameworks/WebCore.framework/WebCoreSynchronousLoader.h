/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class NSMutableData, NSURL, NSURLResponse, NSError;



@interface WebCoreSynchronousLoader : NSObject 
{
    NSURL *m_url;
    NSURLResponse *m_response;
    NSMutableData *m_data;
    NSError *m_error;
    BOOL m_isDone;
}

+ (id)loadRequest:(id)arg1 returningResponse:(id*)arg2 error:(id*)arg3;

- (BOOL)_isDone;
- (void)dealloc;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (id)_data;
- (id)_response;
- (id)_error;

@end
