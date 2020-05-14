using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Miner : MonoBehaviour {
    
    public GameObject miner;

    int[] array = new int[4] { 1, 2, 3, 4 };
    
    public void DoMining(int verNum, int horNum)
    {
        StartCoroutine(Mining(verNum, horNum));
    }
    
    IEnumerator Mining(int ver, int hor)
    {
        for (int i = 0; i < array.Length; i++)
        {
            int place = array[i];
            int random = Random.Range(i, array.Length);
            array[i] = array[random];
            array[random] = place;
        }

        float interval;

        Switching(array[0], ver, hor);
        interval = Random.Range(0.1f, 1f);
        yield return new WaitForSeconds(interval);
        
        Switching(array[1], ver, hor);
        interval = Random.Range(0.1f, 1f);
        yield return new WaitForSeconds(interval);

        Switching(array[2], ver, hor);
        interval = Random.Range(0.1f, 1f);
        yield return new WaitForSeconds(interval);

        Switching(array[3], ver, hor);
        interval = Random.Range(0.1f, 1f);
        yield return new WaitForSeconds(interval);
        
        
        Destroy(gameObject);
    }

    void Switching(int num, int ver, int hor)
    {
        switch (num)
        {
            case 4:
                    int verUp = ver + 2;
                    GameObject upObj = GameObject.Find(verUp + "-" + hor);
                    GameObject upObj2 = GameObject.Find(verUp - 1 + "-" + hor);

                if (upObj != null)
                {
                    Destroy(upObj);
                    Destroy(upObj2);

                    MiningFormat(verUp, hor);
                }
                break;
            case 3:
                    int verDown = ver - 2;
                    GameObject downObj = GameObject.Find(verDown + "-" + hor);
                    GameObject downObj2 = GameObject.Find(verDown + 1 + "-" + hor);

                if (downObj != null)
                {
                    Destroy(downObj);
                    Destroy(downObj2);

                    MiningFormat(verDown, hor);
                }
                break;
            case 2:
                    int horRight = hor + 2;
                    GameObject rightObj = GameObject.Find(ver + "-" + horRight);
                    GameObject rightObj2 = GameObject.Find(ver + "-" + (horRight - 1));

                if (rightObj != null)
                {
                     Destroy(rightObj);
                     Destroy(rightObj2);

                    MiningFormat(ver, horRight);
                }
                break;
            case 1:
                    int horLeft = hor - 2;
                    GameObject leftObj = GameObject.Find(ver + "-" + horLeft);
                    GameObject leftObj2 = GameObject.Find(ver + "-" + (horLeft + 1));

                if (leftObj != null)
                {
                    Destroy(leftObj);
                    Destroy(leftObj2);

                    MiningFormat(ver, horLeft);
                }
                break;
        }
    }

    void MiningFormat(int ver, int hor)
    {
        GameObject minerObj = Instantiate(miner, Vector3.zero, Quaternion.identity);
        Miner minerScr = minerObj.GetComponent<Miner>();
        minerScr.DoMining(ver, hor);
    }
}
